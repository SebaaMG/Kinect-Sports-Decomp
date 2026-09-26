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
extern int fn_82BE5240();
extern int fn_82BE6050();
extern int fn_82F68CC0();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


undefined8 fn_82BE6148(int *param_1,longlong param_2,longlong param_3)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (int)param_2;
  if (iVar3 < 1) {
    uVar4 = 0xffffffff820e9504;
  }
  else {
    if ((param_1[7] == 0) || (param_1[10] < 1)) {
      uVar4 = fn_82BE6050(param_1,param_2);
      return uVar4;
    }
    if ((0 < (int)param_3) && (iVar2 = fn_82BE6148(param_1,param_2 + param_3,0), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[6] == 1) && (iVar2 = (**(code **)(*param_1 + 0xc))(param_1), iVar2 < iVar3)) {
      uVar4 = 0xffffffff820e9418;
    }
    else {
      lVar1 = (*(code *)lbl_831751D0)(param_2);
      if (lVar1 != 0) {
        fn_82F68CC0(lVar1,param_1[7],param_1[9]);
        (*(code *)lbl_831751CC)(param_1[7]);
        param_1[7] = (int)lVar1;
        param_1[10] = iVar3;
        return 1;
      }
      uVar4 = 0xffffffff820e94c8;
    }
  }
  fn_82BE5240(param_1,0x65,uVar4);
  return 0;
}

