typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


undefined8 fn_827BDB78(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x180))();
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  if (*(char *)(*(int *)(param_1 + 0x180) + 8) != '\0') {
    puVar3 = (uint *)(param_1 + 0x78);
    do {
      uVar2 = *puVar3;
      if (uVar2 < *(uint *)(param_1 + 0x60)) {
        do {
          if (*(int *)(param_1 + 8) != 0) {
            *(uint *)(*(int *)(param_1 + 8) + 4) = uVar2;
            *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x60);
            (*(code *)**(undefined4 **)(param_1 + 8))(param_1);
          }
          uVar1 = *puVar3;
          (**(code **)(*(int *)(param_1 + 0x184) + 4))(param_1,0,puVar3,0);
          uVar2 = *puVar3;
          if (uVar2 == uVar1) {
            return 0;
          }
        } while (uVar2 < *(uint *)(param_1 + 0x60));
      }
      (**(code **)(*(int *)(param_1 + 0x180) + 4))(param_1);
      (*(code *)**(undefined4 **)(param_1 + 0x180))(param_1);
      *puVar3 = 0;
    } while (*(char *)(*(int *)(param_1 + 0x180) + 8) != '\0');
  }
  *(uint *)(param_1 + 0x14) = ((uint)LZCOUNT((uint)*(byte *)(param_1 + 0x41)) >> 5 ^ 1) + 0xcd;
  return 1;
}

