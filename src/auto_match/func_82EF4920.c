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


undefined8 fn_82EF4920(int *param_1,int *param_2,int param_3,short param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  *param_2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *(ushort *)*param_1;
      if ((uVar1 < 0x30) || (0x39 < uVar1)) {
        if ((uVar1 < 0x41) || (0x46 < uVar1)) {
          if (uVar1 < 0x61) {
            return 0;
          }
          if (0x66 < uVar1) {
            return 0;
          }
          iVar4 = *param_2 * 0x10 + (uint)uVar1 + -0x57;
        }
        else {
          iVar4 = *param_2 * 0x10 + (uint)uVar1 + -0x37;
        }
      }
      else {
        iVar4 = *param_2 * 0x10 + (uint)uVar1 + -0x30;
      }
      *param_2 = iVar4;
      iVar3 = iVar3 + 1;
      *param_1 = *param_1 + 2;
    } while (iVar3 < param_3);
  }
  if (param_4 == 0) {
    return 1;
  }
  sVar2 = *(short *)*param_1;
  *param_1 = (int)((short *)*param_1 + 1);
  if (sVar2 != param_4) {
    return 0;
  }
  return 1;
}

