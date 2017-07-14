/*
 * Camera.h
 *
 *  Created on: Apr 20, 2017
 *      Author: lucb
 */

#ifndef CAMERA_H_
#define CAMERA_H_

#include <GL/glew.h>

#include "GLM_Common.h"

#include "Entity.h"

class Camera : public Entity
{
    const GLfloat YAW = -90.0f;
    const GLfloat PITCH = 0.0f;
    const GLfloat SPEED = 3.0f;
    const GLfloat SENSITIVITY = 0.25f;
    const GLfloat ZOOM = 45.0f;

	public:
	    Camera();
/*
            Camera(Vector3 position = glm::vec3(0.0f, 0.0f, 0.0f),
                   Vector3 up = glm::vec3(0.0f, 1.0f, 0.0f),
                   GLfloat yaw = YAW,
                   GLfloat pitch = PITCH) : m_Front(glm::vec3(0.0f, 0.0f, -1.0f)),
                                            m_MovementSpeed(SPEED),
                                            m_MouseSensitivity(SENSITIVITY),
                                            m_Zoom(ZOOM)
            {
                m_Position = position;
                m_WorldUp = up;
                m_Yaw = yaw;
                m_Pitch = pitch;
                updateCameraVectors();
            }
*/
		void input(float dt);

		const Matrix4& getViewMatrix() const;
		const Matrix4& getProjectionMatrix() const;

		void update();

	private:
		void mouseInput();

		Matrix4 m_viewMatrix;
		Matrix4 m_projectionMatrix;

		Vector3 m_Position;
		Vector3 m_Front;
		Vector3 m_Up;
		Vector3 m_Right;
		Vector3 m_WorldUp;

		GLfloat m_Yaw;
		GLfloat m_Pitch;
        GLfloat m_MovementSpeed;
        GLfloat m_MouseSensitivity;
        GLfloat m_Zoom;
};


#endif /* CAMERA_H_ */
