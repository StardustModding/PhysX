#ifndef WEB_IDL_BINDINGS_H
#define WEB_IDL_BINDINGS_H

#include "PxPhysicsAPI.h"
#include "extensions/PxCollectionExt.h"
#include <vector>
#include <cstring>
#include <iostream>

// enums within namespaces are not supported by webidl binder, as a hack we can use typedefs
typedef physx::PxActorFlag::Enum PxActorFlagEnum;
typedef physx::PxPvdInstrumentationFlag::Enum PxPvdInstrumentationFlagEnum;
typedef physx::PxActorType::Enum PxActorTypeEnum;
typedef physx::PxActorTypeFlag::Enum PxActorTypeFlagEnum;
typedef physx::PxArticulationAxis::Enum PxArticulationAxisEnum;
typedef physx::PxArticulationCacheFlag::Enum PxArticulationCacheFlagEnum;
typedef physx::PxArticulationDriveType::Enum PxArticulationDriveTypeEnum;
typedef physx::PxArticulationFlag::Enum PxArticulationFlagEnum;
typedef physx::PxArticulationJointType::Enum PxArticulationJointTypeEnum;
typedef physx::PxArticulationKinematicFlag::Enum PxArticulationKinematicFlagEnum;
typedef physx::PxArticulationMotion::Enum PxArticulationMotionEnum;
typedef physx::PxArticulationSensorFlag::Enum PxArticulationSensorFlagEnum;
typedef physx::PxBaseFlag::Enum PxBaseFlagEnum;
typedef physx::PxBroadPhaseType::Enum PxBroadPhaseTypeEnum;
typedef physx::PxBVHBuildStrategy::Enum PxBVHBuildStrategyEnum;
typedef physx::PxCapsuleClimbingMode::Enum PxCapsuleClimbingModeEnum;
typedef physx::PxCombineMode::Enum PxCombineModeEnum;
typedef physx::PxConstraintFlag::Enum PxConstraintFlagEnum;
typedef physx::PxContactPairFlag::Enum PxContactPairFlagEnum;
typedef physx::PxContactPairHeaderFlag::Enum PxContactPairHeaderFlagEnum;
typedef physx::PxControllerBehaviorFlag::Enum PxControllerBehaviorFlagEnum;
typedef physx::PxControllerCollisionFlag::Enum PxControllerCollisionFlagEnum;
typedef physx::PxControllerNonWalkableMode::Enum PxControllerNonWalkableModeEnum;
typedef physx::PxControllerShapeType::Enum PxControllerShapeTypeEnum;
typedef physx::PxConvexFlag::Enum PxConvexFlagEnum;
typedef physx::PxConvexMeshCookingType::Enum PxConvexMeshCookingTypeEnum;
typedef physx::PxConvexMeshGeometryFlag::Enum PxConvexMeshGeometryFlagEnum;
typedef physx::PxCudaInteropMode::Enum PxCudaInteropModeEnum;
typedef physx::PxD6Axis::Enum PxD6AxisEnum;
typedef physx::PxD6Drive::Enum PxD6DriveEnum;
typedef physx::PxD6Motion::Enum PxD6MotionEnum;
typedef physx::PxD6JointDriveFlag::Enum PxD6JointDriveFlagEnum;
typedef physx::PxDistanceJointFlag::Enum PxDistanceJointFlagEnum;
typedef physx::PxDynamicTreeSecondaryPruner::Enum PxDynamicTreeSecondaryPrunerEnum;
typedef physx::PxErrorCode::Enum PxErrorCodeEnum;
typedef physx::PxFilterFlag::Enum PxFilterFlagEnum;
typedef physx::PxFilterObjectFlag::Enum PxFilterObjectFlagEnum;
typedef physx::PxForceMode::Enum PxForceModeEnum;
typedef physx::PxFrictionType::Enum PxFrictionTypeEnum;
typedef physx::PxGeometryType::Enum PxGeometryTypeEnum;
typedef physx::PxHeightFieldFlag::Enum PxHeightFieldFlagEnum;
typedef physx::PxHeightFieldFormat::Enum PxHeightFieldFormatEnum;
typedef physx::PxHitFlag::Enum PxHitFlagEnum;
typedef physx::PxIDENTITY PxIDENTITYEnum;
typedef physx::PxJointActorIndex::Enum PxJointActorIndexEnum;
typedef physx::PxMaterialFlag::Enum PxMaterialFlagEnum;
typedef physx::PxMeshCookingHint::Enum PxMeshCookingHintEnum;
typedef physx::PxMeshFlag::Enum PxMeshFlagEnum;
typedef physx::PxMeshGeometryFlag::Enum PxMeshGeometryFlagEnum;
typedef physx::PxMeshMidPhase::Enum PxMeshMidPhaseEnum;
typedef physx::PxMeshPreprocessingFlag::Enum PxMeshPreprocessingFlagEnum;
typedef physx::PxPairFilteringMode::Enum PxPairFilteringModeEnum;
typedef physx::PxPairFlag::Enum PxPairFlagEnum;
typedef physx::PxParticleSolverType::Enum PxParticleSolverTypeEnum;
typedef physx::PxPrismaticJointFlag::Enum PxPrismaticJointFlagEnum;
typedef physx::PxPruningStructureType::Enum PxPruningStructureTypeEnum;
typedef physx::PxQueryFlag::Enum PxQueryFlagEnum;
typedef physx::PxQueryHitType::Enum PxQueryHitType;
typedef physx::PxRevoluteJointFlag::Enum PxRevoluteJointFlagEnum;
typedef physx::PxRigidBodyFlag::Enum PxRigidBodyFlagEnum;
typedef physx::PxRigidDynamicLockFlag::Enum PxRigidDynamicLockFlagEnum;
typedef physx::PxSceneFlag::Enum PxSceneFlagEnum;
typedef physx::PxSceneQueryUpdateMode::Enum PxSceneQueryUpdateModeEnum;
typedef physx::PxShapeFlag::Enum PxShapeFlagEnum;
typedef physx::PxSphericalJointFlag::Enum PxSphericalJointFlagEnum;
typedef physx::PxSolverType::Enum PxSolverTypeEnum;
typedef physx::PxTriangleMeshFlag::Enum PxTriangleMeshFlagEnum;
typedef physx::PxTriggerPairFlag::Enum PxTriggerPairFlagEnum;
typedef physx::PxVehicleClutchAccuracyMode::Enum PxVehicleClutchAccuracyModeEnum;
typedef physx::PxVehicleDifferential4WData::Enum PxVehicleDifferential4WDataEnum;
typedef physx::PxVehicleDrive4WControl::Enum PxVehicleDrive4WControlEnum;
typedef physx::PxVehicleDriveTankControlModel::Enum PxVehicleDriveTankControlModelEnum;
typedef physx::PxVehicleGearsData::Enum PxVehicleGearEnum;
typedef physx::PxVehicleUpdateMode::Enum PxVehicleUpdateModeEnum;
typedef physx::PxVehicleWheelsSimFlag::Enum PxVehicleWheelsSimFlagEnum;
typedef physx::PxVisualizationParameter::Enum PxVisualizationParameterEnum;

// typedefs for pointer types
typedef const physx::PxU8* PxU8ConstPtr;
typedef const physx::PxU16* PxU16ConstPtr;
typedef const physx::PxU32* PxU32ConstPtr;
typedef const physx::PxMaterial* PxMaterialConstPtr;
typedef physx::PxU8* PxU8Ptr;
typedef physx::PxU16* PxU16Ptr;
typedef physx::PxU32* PxU32Ptr;
typedef physx::PxReal* PxRealPtr;
typedef physx::PxMaterial* PxMaterialPtr;
typedef physx::PxActor* PxActorPtr;
typedef physx::PxVehicleWheels* PxVehicleWheelsPtr;

// template classes are not supported by webidl binder, as a hack we can use typedefs
typedef physx::PxFixedSizeLookupTable<physx::PxVehicleEngineData::eMAX_NB_ENGINE_TORQUE_CURVE_ENTRIES> PxEngineTorqueLookupTable;
typedef physx::PxTypedStridedData<physx::PxU16> PxU16StridedData;

typedef physx::PxOverlapBufferN<10> PxOverlapBuffer10;
typedef physx::PxRaycastBufferN<10> PxRaycastBuffer10;
typedef physx::PxSweepBufferN<10> PxSweepBuffer10;

typedef std::vector<PxMaterialConstPtr> Vector_PxMaterialConst;
typedef std::vector<PxActorPtr> Vector_PxActorPtr;
typedef std::vector<physx::PxContactPairPoint> Vector_PxContactPairPoint;
typedef std::vector<physx::PxHeightFieldSample> Vector_PxHeightFieldSample;
typedef std::vector<physx::PxRaycastHit> Vector_PxRaycastHit;
typedef std::vector<physx::PxSweepHit> Vector_PxSweepHit;
typedef std::vector<physx::PxVehicleDrivableSurfaceType> Vector_PxVehicleDrivableSurfaceType;
typedef std::vector<physx::PxWheelQueryResult> Vector_PxWheelQueryResult;
typedef std::vector<PxVehicleWheelsPtr> Vector_PxVehicleWheels;

typedef std::vector<physx::PxReal> Vector_PxReal;
typedef std::vector<physx::PxU8> Vector_PxU8;
typedef std::vector<physx::PxU16> Vector_PxU16;
typedef std::vector<physx::PxU32> Vector_PxU32;
typedef std::vector<physx::PxVec3> Vector_PxVec3;

class PassThroughFilterShader {
    public:
        virtual physx::PxU32 filterShader(physx::PxU32 attributes0,
                                          physx::PxU32 filterData0w0, physx::PxU32 filterData0w1, physx::PxU32 filterData0w2, physx::PxU32 filterData0w3,
                                          physx::PxU32 attributes1,
                                          physx::PxU32 filterData1w0, physx::PxU32 filterData1w1, physx::PxU32 filterData1w2, physx::PxU32 filterData1w3) = 0;

        virtual ~PassThroughFilterShader() { }

        physx::PxU32 outputPairFlags;
};

physx::PxFilterFlags passThrFilterShader(physx::PxFilterObjectAttributes attributes0, physx::PxFilterData filterData0,
                                         physx::PxFilterObjectAttributes attributes1, physx::PxFilterData filterData1,
                                         physx::PxPairFlags& pairFlags, const void* constantBlock, physx::PxU32 constantBlockSize) {
    PX_UNUSED(constantBlockSize);

    PassThroughFilterShader* shader = *((PassThroughFilterShader* const *) constantBlock);
    shader->outputPairFlags = physx::PxPairFlag::eCONTACT_DEFAULT;

    physx::PxFilterFlags result = physx::PxFilterFlags(static_cast<physx::PxU16>(shader->filterShader(
            (physx::PxU32) attributes0, filterData0.word0, filterData0.word1, filterData0.word2, filterData0.word3,
            (physx::PxU32) attributes1, filterData1.word0, filterData1.word1, filterData1.word2, filterData1.word3)));

    pairFlags = physx::PxPairFlags(static_cast<physx::PxU16>(shader->outputPairFlags));
    return result;
}

// default scene filter / query shaders, implemented in C++ for performance reasons
physx::PxFilterFlags defaultFilterShader(physx::PxFilterObjectAttributes attributes0, physx::PxFilterData filterData0,
                                         physx::PxFilterObjectAttributes attributes1, physx::PxFilterData filterData1,
                                         physx::PxPairFlags& pairFlags, const void* constantBlock, physx::PxU32 constantBlockSize) {
    PX_UNUSED(constantBlock);
    PX_UNUSED(constantBlockSize);

    if ((0 == (filterData0.word0 & filterData1.word1)) && (0 == (filterData1.word0 & filterData0.word1))) {
        return physx::PxFilterFlag::eSUPPRESS;
    }

    if (physx::PxFilterObjectIsTrigger(attributes0) || physx::PxFilterObjectIsTrigger(attributes1)) {
        pairFlags = physx::PxPairFlag::eTRIGGER_DEFAULT;
    } else {
        pairFlags = physx::PxPairFlag::eCONTACT_DEFAULT;
    }
    pairFlags |= physx::PxPairFlags(physx::PxU16(filterData0.word2 | filterData1.word2));

    return physx::PxFilterFlag::eDEFAULT;
}

enum VehicleSurfaceTypeMask {
	DRIVABLE_SURFACE = 0xffff0000,
	UNDRIVABLE_SURFACE = 0x0000ffff
};

physx::PxQueryHitType::Enum defaultWheelSceneQueryPreFilterBlocking(physx::PxFilterData filterData0, physx::PxFilterData filterData1,
                                                                    const void* constantBlock, physx::PxU32 constantBlockSize,
                                                                    physx::PxHitFlags& queryFlags) {
	//filterData0 is the vehicle suspension query.
	//filterData1 is the shape potentially hit by the query.
	PX_UNUSED(filterData0);
	PX_UNUSED(constantBlock);
	PX_UNUSED(constantBlockSize);
	PX_UNUSED(queryFlags);
	return ((0 == (filterData1.word3 & DRIVABLE_SURFACE)) ? physx::PxQueryHitType::eNONE : physx::PxQueryHitType::eBLOCK);
}

physx::PxQueryHitType::Enum defaultWheelSceneQueryPostFilterBlocking(physx::PxFilterData filterData0, physx::PxFilterData filterData1,
                                                                     const void* constantBlock, physx::PxU32 constantBlockSize,
                                                                     const physx::PxQueryHit& hit) {
	PX_UNUSED(filterData0);
	PX_UNUSED(filterData1);
	PX_UNUSED(constantBlock);
	PX_UNUSED(constantBlockSize);
	return ((static_cast<const physx::PxSweepHit&>(hit)).hadInitialOverlap() ? physx::PxQueryHitType::eNONE : physx::PxQueryHitType::eBLOCK);
}

// Slightly simplified SimulationEventCallback which can be implemented in non-native code
class SimpleSimulationEventCallback : physx::PxSimulationEventCallback {
    public:
        virtual void onConstraintBreak(physx::PxConstraintInfo*, physx::PxU32) = 0;
        virtual void onWake(physx::PxActor**, physx::PxU32) = 0;
        virtual void onSleep(physx::PxActor**, physx::PxU32) = 0;
        virtual void onContact(const physx::PxContactPairHeader&, const physx::PxContactPair*, physx::PxU32 nbPairs) = 0;
        virtual void onTrigger(physx::PxTriggerPair*, physx::PxU32) = 0;

        // implement onAdvance with empty body so it does not have to be implemented
        // in non-native code (for the sake of performance)
        virtual void onAdvance(const physx::PxRigidBody *const *, const physx::PxTransform*, const physx::PxU32) { }
};

class SimplePvdTransport : physx::PxPvdTransport {
    public:
        SimplePvdTransport() { }

        virtual bool connect() = 0;

        virtual bool isConnected() { return false; }

        virtual void send(void* inBytes, uint32_t inLength) = 0;

        virtual void disconnect() { }

        bool write(const uint8_t *inBytes, uint32_t inLength) {
            send((void*) inBytes, inLength);
            return true;
        }

        PxPvdTransport &lock() {
            return *this;
        }

        void unlock() { }
        void flush() { }
        uint64_t getWrittenDataSize() { return 0; }
        void release() { }
};

class SimpleControllerBehaviorCallback : physx::PxControllerBehaviorCallback {
    public:
        virtual physx::PxU32 getShapeBehaviorFlags(const physx::PxShape& shape, const physx::PxActor& actor) = 0;
        virtual physx::PxU32 getControllerBehaviorFlags(const physx::PxController& controller) = 0;
        virtual physx::PxU32 getObstacleBehaviorFlags(const physx::PxObstacle& obstacle) = 0;

        virtual physx::PxControllerBehaviorFlags getBehaviorFlags(const physx::PxShape& shape, const physx::PxActor& actor) {
            return physx::PxControllerBehaviorFlags(static_cast<physx::PxU8>(getShapeBehaviorFlags(shape, actor)));
        }
        virtual physx::PxControllerBehaviorFlags getBehaviorFlags(const physx::PxController& controller) {
            return physx::PxControllerBehaviorFlags(static_cast<physx::PxU8>(getControllerBehaviorFlags(controller)));
        }
        virtual physx::PxControllerBehaviorFlags getBehaviorFlags(const physx::PxObstacle& obstacle) {
            return physx::PxControllerBehaviorFlags(static_cast<physx::PxU8>(getObstacleBehaviorFlags(obstacle)));
        }

        virtual ~SimpleControllerBehaviorCallback() { }
};

class SimpleQueryFilterCallback : physx::PxQueryFilterCallback {
    public:
        virtual physx::PxU32 simplePreFilter(const physx::PxFilterData& filterData, const physx::PxShape* shape, const physx::PxRigidActor* actor, physx::PxHitFlags &queryFlags) = 0;
        virtual physx::PxU32 simplePostFilter(const physx::PxFilterData& filterData, const physx::PxQueryHit& hit) = 0;

        virtual physx::PxQueryHitType::Enum preFilter(const physx::PxFilterData& filterData, const physx::PxShape* shape, const physx::PxRigidActor* actor, physx::PxHitFlags &queryFlags) {
            return static_cast<physx::PxQueryHitType::Enum>(simplePreFilter(filterData, shape, actor, queryFlags));
        }
        virtual physx::PxQueryHitType::Enum postFilter(const physx::PxFilterData& filterData, const physx::PxQueryHit& hit) {
            return static_cast<physx::PxQueryHitType::Enum>(simplePostFilter(filterData, hit));
        }

        virtual ~SimpleQueryFilterCallback() { }
};

// top-level functions are not supported by webidl binder, we need to wrap them in a class
class PxTopLevelFunctions {
    public:
        static const physx::PxU32 PHYSICS_VERSION = PX_PHYSICS_VERSION;

        static physx::PxSimulationFilterShader DefaultFilterShader() {
            return &defaultFilterShader;
        }

        static void setupPassThroughFilterShader(physx::PxSceneDesc* sceneDesc, PassThroughFilterShader* filterShader) {
            PassThroughFilterShader** data = new PassThroughFilterShader*[1];
            data[0] = filterShader;
            sceneDesc->filterShader = &passThrFilterShader;
            sceneDesc->filterShaderData = data;
            sceneDesc->filterShaderDataSize = sizeof(PassThroughFilterShader*);
        }

        static physx::PxFoundation* CreateFoundation(physx::PxU32 version, physx::PxDefaultAllocator& allocator, physx::PxErrorCallback& errorCallback) {
            return PxCreateFoundation(version, allocator, errorCallback);
        }

        static physx::PxPhysics *CreatePhysics(physx::PxU32 version, physx::PxFoundation &foundation, const physx::PxTolerancesScale &scale, physx::PxPvd* pvd = NULL)
        {
            return PxCreatePhysics(version, foundation, scale, false, pvd);
        }

        static physx::PxCooking* CreateCooking(physx::PxU32 version, physx::PxFoundation& foundation, const physx::PxCookingParams& params) {
            return PxCreateCooking(version, foundation, params);
        }

        static physx::PxControllerManager* CreateControllerManager(physx::PxScene& scene, bool lockingEnabled = false) {
            return PxCreateControllerManager(scene, lockingEnabled);
        }

        static physx::PxPvd *CreatePvd(physx::PxFoundation &foundation) {
            return PxCreatePvd(foundation);
        }

        static physx::PxDefaultCpuDispatcher* DefaultCpuDispatcherCreate(physx::PxU32 numThreads) {
            return physx::PxDefaultCpuDispatcherCreate(numThreads);
        }

        static bool InitExtensions(physx::PxPhysics& physics) {
            return PxInitExtensions(physics, NULL);
        }

        static void CloseExtensions() {
            PxCloseExtensions();
        }

        static physx::PxCudaContextManager* CreateCudaContextManager(physx::PxFoundation& foundation, const physx::PxCudaContextManagerDesc& desc) {
            #if defined(__EMSCRIPTEN__) || defined(__APPLE__)
                PX_UNUSED(foundation);
                PX_UNUSED(desc);
                return NULL;
            #else
                return PxCreateCudaContextManager(foundation, desc);
            #endif
        }

        static physx::PxD6Joint* D6JointCreate(physx::PxPhysics& physics, physx::PxRigidActor* actor0, physx::PxTransform& localFrame0, physx::PxRigidActor* actor1, physx::PxTransform& localFrame1) {
            return physx::PxD6JointCreate(physics, actor0, localFrame0, actor1, localFrame1);
        }

        static physx::PxDistanceJoint* DistanceJointCreate(physx::PxPhysics& physics, physx::PxRigidActor* actor0, physx::PxTransform& localFrame0, physx::PxRigidActor* actor1, physx::PxTransform& localFrame1) {
            return physx::PxDistanceJointCreate(physics, actor0, localFrame0, actor1, localFrame1);
        }

        static physx::PxFixedJoint* FixedJointCreate(physx::PxPhysics& physics, physx::PxRigidActor* actor0, physx::PxTransform& localFrame0, physx::PxRigidActor* actor1, physx::PxTransform& localFrame1) {
            return physx::PxFixedJointCreate(physics, actor0, localFrame0, actor1, localFrame1);
        }

        static physx::PxPrismaticJoint* PrismaticJointCreate(physx::PxPhysics& physics, physx::PxRigidActor* actor0, physx::PxTransform& localFrame0, physx::PxRigidActor* actor1, physx::PxTransform& localFrame1) {
            return physx::PxPrismaticJointCreate(physics, actor0, localFrame0, actor1, localFrame1);
        }

        static physx::PxRevoluteJoint* RevoluteJointCreate(physx::PxPhysics& physics, physx::PxRigidActor* actor0, physx::PxTransform& localFrame0, physx::PxRigidActor* actor1, physx::PxTransform& localFrame1) {
            return physx::PxRevoluteJointCreate(physics, actor0, localFrame0, actor1, localFrame1);
        }

        static physx::PxSphericalJoint* SphericalJointCreate(physx::PxPhysics& physics, physx::PxRigidActor* actor0, physx::PxTransform& localFrame0, physx::PxRigidActor* actor1, physx::PxTransform& localFrame1) {
            return physx::PxSphericalJointCreate(physics, actor0, localFrame0, actor1, localFrame1);
        }

        static physx::PxConvexMesh* CreateConvexMesh(const physx::PxCookingParams& params, const physx::PxConvexMeshDesc& desc) {
            return PxCreateConvexMesh(params, desc);
        }

        static physx::PxTriangleMesh* CreateTriangleMesh(const physx::PxCookingParams &params, const physx::PxTriangleMeshDesc &desc) {
            return PxCreateTriangleMesh(params, desc);
        }

        static physx::PxHeightField* CreateHeightField(const physx::PxHeightFieldDesc &desc) {
            return PxCreateHeightField(desc);
        }
};

class PxVehicleTopLevelFunctions {
    public:
        static bool InitVehicleSDK(physx::PxPhysics& physics) {
            return PxInitVehicleSDK(physics, NULL);
        }

        static void PxVehicleComputeSprungMasses(physx::PxU32 nbSprungMasses, const physx::PxVec3* sprungMassCoordinates, const physx::PxVec3& centreOfMass, physx::PxReal totalMass, physx::PxU32 gravityDirection, physx::PxReal* sprungMasses) {
            physx::PxVehicleComputeSprungMasses(nbSprungMasses, sprungMassCoordinates, centreOfMass, totalMass, gravityDirection, sprungMasses);
        }

        static void PxVehicleUpdates(const physx::PxReal timestep, const physx::PxVec3& gravity, const physx::PxVehicleDrivableSurfaceToTireFrictionPairs& vehicleDrivableSurfaceToTireFrictionPairs,
                                     Vector_PxVehicleWheels& vehicles, physx::PxVehicleWheelQueryResult* vehicleWheelQueryResults) {
            physx::PxVehicleUpdates(timestep, gravity, vehicleDrivableSurfaceToTireFrictionPairs, physx::PxU32(vehicles.size()), vehicles.data(), vehicleWheelQueryResults);
        }

        static void VehicleSetBasisVectors(const physx::PxVec3& up, const physx::PxVec3& forward) {
            physx::PxVehicleSetBasisVectors(up, forward);
        }

        static void VehicleSetUpdateMode(physx::PxVehicleUpdateMode::Enum vehicleUpdateMode) {
            physx::PxVehicleSetUpdateMode(vehicleUpdateMode);
        }

        static float PxVehicleTireData_getFrictionVsSlipGraph(physx::PxVehicleTireData* tireData, physx::PxU32 m, physx::PxU32 n) {
            return tireData->mFrictionVsSlipGraph[m][n];
        }

        static void PxVehicleTireData_setFrictionVsSlipGraph(physx::PxVehicleTireData* tireData, physx::PxU32 m, physx::PxU32 n, float value) {
            tireData->mFrictionVsSlipGraph[m][n] = value;
        }
};

// Various helper functions for pointer access and conversion
class TypeHelpers {
    public:
        static physx::PxU8 getU8At(const physx::PxU8* base, int index) {
            return base[index];
        }

        static physx::PxU16 getU16At(const physx::PxU16* base, int index) {
            return base[index];
        }

        static physx::PxU32 getU32At(const physx::PxU32* base, int index) {
            return base[index];
        }

        static physx::PxReal getRealAt(physx::PxReal* base, int index) {
            return base[index];
        }

        static physx::PxActor* getActorAt(physx::PxActor* base, int index) {
            return &base[index];
        }

        static physx::PxBounds3* getBounds3At(physx::PxBounds3* base, int index) {
            return &base[index];
        }

        static physx::PxContactPair* getContactPairAt(physx::PxContactPair* base, int index) {
            return &base[index];
        }

        static physx::PxContactPairHeader* getContactPairHeaderAt(physx::PxContactPairHeader* base, int index) {
            return &base[index];
        }

        static physx::PxController* getControllerAt(physx::PxController* base, int index) {
            return &base[index];
        }

        static physx::PxControllerShapeHit* getControllerShapeHitAt(physx::PxControllerShapeHit* base, int index) {
            return &base[index];
        }

        static physx::PxControllersHit* getControllersHitAt(physx::PxControllersHit* base, int index) {
            return &base[index];
        }

        static physx::PxControllerObstacleHit* getControllerObstacleHitAt(physx::PxControllerObstacleHit* base, int index) {
            return &base[index];
        }

        static physx::PxObstacle* getObstacleAt(physx::PxObstacle* base, int index) {
            return &base[index];
        }

        static physx::PxShape* getShapeAt(physx::PxShape* base, int index) {
            return &base[index];
        }

        static physx::PxTriggerPair* getTriggerPairAt(physx::PxTriggerPair* base, int index) {
            return &base[index];
        }

        static physx::PxVec3* getVec3At(physx::PxVec3* base, int index) {
            return &base[index];
        }

        static PxU8Ptr voidToU8Ptr(void* voidPtr) {
            return (PxU8Ptr) voidPtr;
        }

        static PxU16Ptr voidToU16Ptr(void* voidPtr) {
            return (PxU16Ptr) voidPtr;
        }

        static PxU32Ptr voidToU32Ptr(void* voidPtr) {
            return (PxU32Ptr) voidPtr;
        }

        static PxRealPtr voidToRealPtr(void* voidPtr) {
            return (PxRealPtr) voidPtr;
        }
};

// Helper functions for accessing functions, which don't map well to JS / Java
class SupportFunctions {
    public:
        static physx::PxShape* PxActor_getShape(physx::PxRigidActor& actor, physx::PxU32 i) {
            physx::PxShape* shapePtr;
            actor.getShapes(&shapePtr, 1, i);
            return shapePtr;
        }

        static physx::PxActor* PxContactPairHeader_getActor(physx::PxContactPairHeader& pairHeader, physx::PxU32 i) {
            return pairHeader.actors[i];
        }

        static Vector_PxActorPtr& PxScene_getActiveActors(physx::PxScene* scene) {
            static Vector_PxActorPtr activeActors;
            physx::PxU32 nbActors;
            physx::PxActor** actors = scene->getActiveActors(nbActors);

            activeActors.resize(static_cast<size_t>(nbActors));
            std::memcpy(activeActors.data(), actors, static_cast<size_t>(sizeof(physx::PxActor*) * nbActors));
            return activeActors;
        }
};

#endif