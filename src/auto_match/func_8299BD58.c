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
extern int fn_82975B00();
extern int fn_82996970();


undefined8 fn_8299BD58(int param_1,uint *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = param_3;
  puVar3 = param_2;
  iVar1 = fn_82996970(*param_2 & 0xfff00000);
  if ((iVar1 != 0) && (puVar3[5] != 0)) {
    if ((uVar4 & 0xffffffff) != 0) {
      fn_82975B00(param_1,puVar3[0xf],0x1194,0xffffffff820512b4);
      return 0;
    }
    param_3 = param_3 + 1;
  }
  uVar5 = 0;
  if (param_2[5] != 0) {
    iVar1 = 0;
    do {
      iVar2 = fn_8299BD58(param_1,*(undefined4 *)
                                     (*(int *)(param_2[6] + iVar1) * 4 + *(int *)(param_1 + 0x18)),
                            param_3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar5 < param_2[5]);
  }
  return 1;
}

