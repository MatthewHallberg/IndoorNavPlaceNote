using System;
using UnityEngine;

public interface PlacenoteListener
{
	void OnPose(Matrix4x4 outputPose, Matrix4x4 arkitPose);
	void OnStatusChange(LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus);
}

