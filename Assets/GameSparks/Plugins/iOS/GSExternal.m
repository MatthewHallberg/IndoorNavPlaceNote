# include "GSExternal.h"

#if __cplusplus
extern "C" {
#endif
    
    void GSGetProxySettings(char* gameObjectName){
        
        CFDictionaryRef dicRef = CFNetworkCopySystemProxySettings();
        
        const CFStringRef proxyCFstr = (const CFStringRef)CFDictionaryGetValue(dicRef, (const void*)kCFNetworkProxiesHTTPProxy);
        
        if (proxyCFstr == NULL) {
            return;
        }
        
        char proxyDetails[512];
        
        if(CFStringGetCString(proxyCFstr, proxyDetails, 512, kCFStringEncodingUTF8)){
            
            const CFNumberRef portCFnum = (const CFNumberRef)CFDictionaryGetValue(dicRef, (const void*)kCFNetworkProxiesHTTPPort);
            
            SInt32 port;
            
            if (CFNumberGetValue(portCFnum, kCFNumberSInt32Type, &port))
            {
                sprintf(proxyDetails, "%s:%d", proxyDetails, (int)port);
                UnitySendMessage(gameObjectName, "GSSetProxySettings", proxyDetails);
            }
        }
    }
    
    
#if __cplusplus
}
#endif

// socket controller


