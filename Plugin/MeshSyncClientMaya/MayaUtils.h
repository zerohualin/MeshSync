#pragma  once

std::string GetPath(MDagPath path);
std::string GetPath(MObject node);

MDagPath GetDagPath(MObject node);
bool IsVisible(MObject node);
MObject GetTransform(MDagPath path);
MObject GetTransform(MObject node);
MObject GetShape(MObject node);

MObject FindMesh(MObject node);
MObject FindSkinCluster(MObject node);
MObject FindBlendShape(MObject node);
MObject FindOrigMesh(MObject node);
MObject FindInputMesh(const MFnGeometryFilter& gf, const MDagPath& path);
MObject FindOutputMesh(const MFnGeometryFilter& gf, const MDagPath& path);

bool JointGetSegmentScaleCompensate(MObject joint);
bool JointGetInverseScale(MObject joint, mu::float3& dst);
float ToSeconds(MTime t);
MTime ToMTime(float seconds);

void DumpPlugInfo(MPlug plug);