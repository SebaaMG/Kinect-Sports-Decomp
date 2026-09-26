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
extern unsigned int lbl_820E7F9E;


undefined8 fn_82BB33A0(int *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar4;
  longlong lVar2;
  int iVar3;
  longlong lVar5;
  
  cVar4 = (**(code **)(*param_2 + 0x4c))(param_2);
  if (cVar4 != '\0') {
    if (param_2[0x3b] == 0) {
      iVar3 = param_2[0x15];
    }
    else {
      iVar3 = *(int *)(param_2[0x3b] + 0x50);
    }
    if (((&lbl_820E7F9E)[iVar3 * 0xc] == 0) ||
       (bVar1 = true, 4 < (byte)(&lbl_820E7F9E)[iVar3 * 0xc])) {
      bVar1 = false;
    }
    if (bVar1) {
      lVar5 = 0;
      while (((lVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_3,lVar5), lVar2 < 0 ||
              (3 < (int)lVar2)) || (iVar3 = (**(code **)(*param_2 + 0x50))(param_2,0), iVar3 != 1)))
      {
        lVar5 = lVar5 + 1;
        if (3 < (int)lVar5) {
          return 1;
        }
      }
    }
  }
  return 0;
}

