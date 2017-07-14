#ifndef TEXTURE_H_INCLUDED
#define TEXTURE_H_INCLUDED

#include <GL/glew.h>
#include <string>

namespace Texture
{
    class Basic_Texture
    {
        public:
            void load(const std::string& filename);

            void bind();
            void unbind();

        private:
            GLuint m_textureID;
    };
}

#endif // TEXTURE_H_INCLUDED
