using System.IO;
using System.Linq;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;


class LibraryCheck : ScriptableObject, IPreprocessBuild
{
	public int callbackOrder { get { return 0; } }
	public void OnPreprocessBuild(BuildTarget target, string path) {
		var script = MonoScript.FromScriptableObject (this);
		string scriptLoc = AssetDatabase.GetAssetPath (script); //this scripts path
		string[] splitPathStr = scriptLoc.Split ('/');
		string placenoteLibraryPath = string.Join ("/", splitPathStr.Take (splitPathStr.Length - 2).ToArray ()) + "/Plugins/iOS/Placenote.framework/Placenote"; //find library relative to this scripts path

		if (!File.Exists (placenoteLibraryPath)) {
			Debug.LogError ("Can't find Placenote Library. It should be in Placenote/Plugins/iOS/Placenote.framework Please install git lfs to download the proper file. You can follow the instructions here:\nhttps://github.com/Placenote/PlacenoteSDK-Unity");
		}

		if (new FileInfo (placenoteLibraryPath).Length < 1000000) {
			Debug.LogError ("Placenote not properly downloaded. Please install git lfs to download it properly. You can follow the instructions here:\nhttps://github.com/Placenote/PlacenoteSDK-Unity");
		}
	}
}
	
