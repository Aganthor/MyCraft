#ifndef SHADER_PROGRAM_H_INCLUDED
#define SHADER_PROGRAM_H_INCLUDED

#include <GL/glew.h>
#include <string>

#include "../GLM_Common.h"

namespace Shader
{
    class Shader_Program
    {
        public:
            Shader_Program(const std::string& vertexShaderFile,
                           const std::string& fragmentShaderFile);
            ~Shader_Program();

            void bind();
            void unbind();

        protected:
            virtual void getUniformLocations() = 0;

            GLuint getID() const;

            void loadFloat(GLuint location, float value);
            void loadMatrix4(GLuint location, const Matrix4& matrix);

        private:
            GLuint m_programID;
    };
}

#endif // SHADER_PROGRAM_H_INCLUDED
