// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/UnlitVertexColorSize" {
Properties{
    point_size("Point Size", Float) = 5.0
}

SubShader {
    Tags { "Queue" = "Transparent" } 
    Pass {
     	ZWrite Off // don't write to depth buffer 
        // in order not to occlude other objects

        Blend SrcAlpha OneMinusSrcAlpha // use alpha blending
 
        CGPROGRAM
        #pragma vertex vert
        #pragma fragment frag
       
        #include "UnityCG.cginc"

        struct IN
        {
            float4 pos : POSITION;
            float4 color : COLOR;
        };

        struct v2f
        {
            float4 vertex : SV_POSITION;
            float4 color : COLOR;
            float size : PSIZE;
        };
       
        float point_size;
       
        v2f vert (IN v)
        {
            v2f o;
            o.vertex = UnityObjectToClipPos(v.pos);
            o.size = point_size;
           
            // Color should be based on pose relative info
            o.color = v.color;
            return o;
        }
       
        fixed4 frag (v2f i) : SV_Target
        {
            return i.color;
        }
        ENDCG
    }
}
}

