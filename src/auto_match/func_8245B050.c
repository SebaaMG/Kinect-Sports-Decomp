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
extern int fn_8245B100();


undefined8 fn_8245B050(int param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_3;
  if (((iVar3 < 8) && (*(int *)(param_1 + 0xc) != 0)) && (*(int *)(param_1 + 0x14) != 0)) {
    if ((8 < (uint)*(byte *)(param_1 + 0x18) + iVar3) &&
       (fn_8245B100(), *(int *)(param_1 + 0x14) == 0)) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    if (0 < iVar3) {
      do {
        uVar1 = (uint)param_2;
        param_2 = (param_2 & 0xffffffff) >> 1 & 0x7f;
        *(byte *)(param_1 + 0x19) =
             (byte)((uVar1 & 1) << (*(byte *)(param_1 + 0x18) & 0x3f)) | *(byte *)(param_1 + 0x19);
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}

