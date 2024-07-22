#include <btc.h>


TEE_Result TEE_OpenPersistentObject( uint32_t storageID, [in(objectIDLength)] void* objectID, size_t objectIDLen, uint32_t flags, TEE_ObjectHandle* object ){

    uint32_t res;

    res = btc_check_masterkey(&node);

    if(res == 0){ //res tem de ser TEE_SUCCESS, verificar se da para igualar....verificar se obj da para colocar TEE_HANDLE_NULL differente 
		return TEE_SUCCESS;
	}
	else {
		object = TEE_HANDLE_NULL;
        return 0;
	}
}

void TEE_CloseObject{TEE_ObjectHandle obj}
