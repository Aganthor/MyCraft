#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/Application.o \
	${OBJECTDIR}/src/Camera.o \
	${OBJECTDIR}/src/Display.o \
	${OBJECTDIR}/src/Math/Matrix_Maths.o \
	${OBJECTDIR}/src/Model.o \
	${OBJECTDIR}/src/Renderer/RendererChunk.o \
	${OBJECTDIR}/src/Renderer/RendererMaster.o \
	${OBJECTDIR}/src/Renderer/RendererSimple.o \
	${OBJECTDIR}/src/Shader/Chunk_Shader.o \
	${OBJECTDIR}/src/Shader/Shader_Loader.o \
	${OBJECTDIR}/src/Shader/Shader_Program.o \
	${OBJECTDIR}/src/Shader/Simple_Shader.o \
	${OBJECTDIR}/src/States/Game_State.o \
	${OBJECTDIR}/src/States/Playing_State.o \
	${OBJECTDIR}/src/Temp/Quad.o \
	${OBJECTDIR}/src/Texture/Texture.o \
	${OBJECTDIR}/src/Texture/Texture_Atlas.o \
	${OBJECTDIR}/src/Util/Random.o \
	${OBJECTDIR}/src/World/Block/Block_Data.o \
	${OBJECTDIR}/src/World/Block/Block_Database.o \
	${OBJECTDIR}/src/World/Block/Block_Types/BAir.o \
	${OBJECTDIR}/src/World/Block/Block_Types/BGrass.o \
	${OBJECTDIR}/src/World/Block/Block_Types/Block_Type.o \
	${OBJECTDIR}/src/World/Chunk/Chunk_Block.o \
	${OBJECTDIR}/src/World/Chunk/Chunk_Section.o \
	${OBJECTDIR}/src/World/WorldMap.o \
	${OBJECTDIR}/src/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mycraft2

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mycraft2: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mycraft2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/Application.o: src/Application.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Application.o src/Application.cpp

${OBJECTDIR}/src/Camera.o: src/Camera.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Camera.o src/Camera.cpp

${OBJECTDIR}/src/Display.o: src/Display.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Display.o src/Display.cpp

${OBJECTDIR}/src/Math/Matrix_Maths.o: src/Math/Matrix_Maths.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Math
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Math/Matrix_Maths.o src/Math/Matrix_Maths.cpp

${OBJECTDIR}/src/Model.o: src/Model.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Model.o src/Model.cpp

${OBJECTDIR}/src/Renderer/RendererChunk.o: src/Renderer/RendererChunk.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Renderer
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Renderer/RendererChunk.o src/Renderer/RendererChunk.cpp

${OBJECTDIR}/src/Renderer/RendererMaster.o: src/Renderer/RendererMaster.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Renderer
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Renderer/RendererMaster.o src/Renderer/RendererMaster.cpp

${OBJECTDIR}/src/Renderer/RendererSimple.o: src/Renderer/RendererSimple.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Renderer
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Renderer/RendererSimple.o src/Renderer/RendererSimple.cpp

${OBJECTDIR}/src/Shader/Chunk_Shader.o: src/Shader/Chunk_Shader.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Shader
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Shader/Chunk_Shader.o src/Shader/Chunk_Shader.cpp

${OBJECTDIR}/src/Shader/Shader_Loader.o: src/Shader/Shader_Loader.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Shader
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Shader/Shader_Loader.o src/Shader/Shader_Loader.cpp

${OBJECTDIR}/src/Shader/Shader_Program.o: src/Shader/Shader_Program.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Shader
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Shader/Shader_Program.o src/Shader/Shader_Program.cpp

${OBJECTDIR}/src/Shader/Simple_Shader.o: src/Shader/Simple_Shader.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Shader
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Shader/Simple_Shader.o src/Shader/Simple_Shader.cpp

${OBJECTDIR}/src/States/Game_State.o: src/States/Game_State.cpp
	${MKDIR} -p ${OBJECTDIR}/src/States
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/States/Game_State.o src/States/Game_State.cpp

${OBJECTDIR}/src/States/Playing_State.o: src/States/Playing_State.cpp
	${MKDIR} -p ${OBJECTDIR}/src/States
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/States/Playing_State.o src/States/Playing_State.cpp

${OBJECTDIR}/src/Temp/Quad.o: src/Temp/Quad.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Temp
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Temp/Quad.o src/Temp/Quad.cpp

${OBJECTDIR}/src/Texture/Texture.o: src/Texture/Texture.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Texture
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Texture/Texture.o src/Texture/Texture.cpp

${OBJECTDIR}/src/Texture/Texture_Atlas.o: src/Texture/Texture_Atlas.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Texture
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Texture/Texture_Atlas.o src/Texture/Texture_Atlas.cpp

${OBJECTDIR}/src/Util/Random.o: src/Util/Random.cpp
	${MKDIR} -p ${OBJECTDIR}/src/Util
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Util/Random.o src/Util/Random.cpp

${OBJECTDIR}/src/World/Block/Block_Data.o: src/World/Block/Block_Data.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Block
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Block/Block_Data.o src/World/Block/Block_Data.cpp

${OBJECTDIR}/src/World/Block/Block_Database.o: src/World/Block/Block_Database.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Block
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Block/Block_Database.o src/World/Block/Block_Database.cpp

${OBJECTDIR}/src/World/Block/Block_Types/BAir.o: src/World/Block/Block_Types/BAir.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Block/Block_Types
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Block/Block_Types/BAir.o src/World/Block/Block_Types/BAir.cpp

${OBJECTDIR}/src/World/Block/Block_Types/BGrass.o: src/World/Block/Block_Types/BGrass.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Block/Block_Types
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Block/Block_Types/BGrass.o src/World/Block/Block_Types/BGrass.cpp

${OBJECTDIR}/src/World/Block/Block_Types/Block_Type.o: src/World/Block/Block_Types/Block_Type.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Block/Block_Types
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Block/Block_Types/Block_Type.o src/World/Block/Block_Types/Block_Type.cpp

${OBJECTDIR}/src/World/Chunk/Chunk_Block.o: src/World/Chunk/Chunk_Block.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Chunk
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Chunk/Chunk_Block.o src/World/Chunk/Chunk_Block.cpp

${OBJECTDIR}/src/World/Chunk/Chunk_Section.o: src/World/Chunk/Chunk_Section.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World/Chunk
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/Chunk/Chunk_Section.o src/World/Chunk/Chunk_Section.cpp

${OBJECTDIR}/src/World/WorldMap.o: src/World/WorldMap.cpp
	${MKDIR} -p ${OBJECTDIR}/src/World
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/World/WorldMap.o src/World/WorldMap.cpp

${OBJECTDIR}/src/main.o: src/main.cpp
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
