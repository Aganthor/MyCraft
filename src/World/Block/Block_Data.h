#ifndef BLOCK_DATA_H
#define BLOCK_DATA_H

#include <string>

#include "Block_ID.h"
#include "../../GLM_Common.h"

namespace Block
{
	class Data
	{
		public:
			Data(const std::string& fileName);

        private:
            ID m_blockID;
            std::string m_name;
            bool m_isOpaque;

            Vector2 m_topTextureCoords;
            Vector2 m_sideTextureCoords;
            Vector2 m_bottomTextureCoords;
	};
}

#endif // !BLOCK_DATA_H
