#include "Vector3D.h"
#include "Math.h"

Vector3D::Vector3D(const float x, const float y, const float z, const float w)
{
	X = x;
	Y = y;
	Z = z;
	W = w;
}

Vector3D::Vector3D(glm::vec3 vec3)
{
	X = vec3.x;
	Y = vec3.y;
	Z = vec3.z;
}

float Vector3D::Norme(float x, float y, float z)
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

float Vector3D::SqNorme(float x, float y, float z)
{
	return pow(x, 2) + pow(y, 2) + pow(z, 2);
}

Vector3D Vector3D::Normalisation(float constant, Vector3D vector)
{
	return Vector3D(constant / vector.X, constant / vector.Y, constant / vector.Z, 0);
}

glm::vec3 Vector3D::ConvertVect(Vector3D vector)
{
	return glm::vec3(vector.X, vector.Y, vector.Z);
}
