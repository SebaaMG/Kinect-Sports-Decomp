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


undefined8 fn_82D7BEF0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = param_1[2];
  iVar4 = 0;
  if (0 < iVar1) {
    puVar3 = (uint *)param_1[1];
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 == iVar1) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = 0x200;
      }
      if ((*puVar3 <= param_2) && (param_2 < iVar2 + *puVar3)) {
        return 1;
      }
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

