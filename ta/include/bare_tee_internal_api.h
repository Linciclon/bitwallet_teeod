#ifndef __BTC_H__
#define __BTC_H__

#define MAX_SIGNATURE_SIZE 72
#define MNEMONIC_STRENGTH 128
#define BIP32_SERIALIZED_LEN  112 //78


// Bitcoin wallet commands
bool TEE_OpenPersistentObject(uint32_t storageID, [in(objectIDLength)] void* objectID, size_t objectIDLen, uint32_t flags, TEE_ObjectHandle* object);
void TEE_CloseObject();

#endif /* __BTC_H__ */