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


void fn_827CD810(int param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (*(uint *)(iVar1 + 8) < *(uint *)(param_1 + 0xe0)) {
    puVar4 = (uint *)(iVar1 + 0xc);
    do {
      if (*puVar4 < 8) {
        (**(code **)(*(int *)(param_1 + 0x144) + 4))
                  (param_1,param_2,param_3,param_4,iVar1 + 0x18,puVar4,8);
      }
      if (*puVar4 != 8) {
        return;
      }
      cVar2 = (**(code **)(*(int *)(param_1 + 0x148) + 4))(param_1,iVar1 + 0x18);
      if (cVar2 == '\0') {
        if (*(char *)(iVar1 + 0x10) != '\0') {
          return;
        }
        *param_3 = *param_3 + -1;
        *(undefined1 *)(iVar1 + 0x10) = 1;
        return;
      }
      if (*(char *)(iVar1 + 0x10) != '\0') {
        *param_3 = *param_3 + 1;
        *(undefined1 *)(iVar1 + 0x10) = 0;
      }
      *puVar4 = 0;
      uVar3 = *(int *)(iVar1 + 8) + 1;
      *(uint *)(iVar1 + 8) = uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0xe0));
  }
  return;
}

