#pragma once
#include "ofMain.h"

class Vector3D
{
public:
	Vector3D(const float x, const float y, const float z, const float w);
	Vector3D(glm::vec3 vec3);
	float Norme(float x, float y, float z);
	float SqNorme(float x, float y, float z);
	Vector3D Normalisation(float constant, Vector3D vector);
	static glm::vec3 ConvertVect(Vector3D vector);

	float getVectorX() {
		return X;
	}

	//New definition for + operator
	Vector3D operator+(Vector3D vector) {
		float tempx = this->X + vector.X;
		float tempy = this->Y + vector.Y;
		float tempz = this->Z + vector.Z;
		return Vector3D(tempx, tempy, tempz, NULL);
	}

	//New definition for * operator
	Vector3D operator*(float C) {
		float tempx = this->X * C;
		float tempy = this->Y * C;
		float tempz = this->Z * C;
		return Vector3D(tempx, tempy, tempz, NULL);
	}

	//New definition for - operator
	Vector3D operator-(Vector3D vector) {
		float tempx = this->X - vector.X;
		float tempy = this->Y - vector.Y;
		float tempz = this->Z - vector.Z;
		return Vector3D(tempx, tempy, tempz, NULL);
	}

private:
	float X;
	float Y;
	float Z;
	float W;

};