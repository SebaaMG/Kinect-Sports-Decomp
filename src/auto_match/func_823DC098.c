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
extern int fn_823DC1D0();
extern int fn_823DC240();
extern int fn_823DC330();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8
fn_823DC098(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5)

{
  undefined4 uVar2;
  undefined8 uVar1;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = (int)param_4;
  if (((param_2 & 0xffffffff) == 0) || (iVar3 == 0)) {
    uVar1 = 0;
  }
  else if ((param_2 & 0xffffffff) == 1) {
    uVar2 = fn_823DC1D0(param_3,param_4);
    ((undefined4 *)param_5)[1] = uVar2;
    uVar1 = 1;
    *(undefined4 *)param_5 = 0;
  }
  else {
    puVar4 = (undefined4 *)param_5;
    if (iVar3 == 1) {
      uVar2 = fn_823DC1D0();
      *puVar4 = uVar2;
      uVar1 = 1;
      puVar4[1] = 0;
    }
    else {
      if ((param_2 & 0xffffffff) != (param_4 & 0xffffffff)) {
        if ((param_2 & 0xffffffff) == 2) {
          if (iVar3 == 3) {
            fn_823DC240(param_1,param_3,&uStack_20);
            *puVar4 = 0;
            puVar4[2] = 1;
            puVar4[1] = uStack_20;
            puVar4[3] = uStack_1c;
            return 2;
          }
        }
        else if (((param_2 & 0xffffffff) == 3) && (iVar3 == 2)) {
          fn_823DC240(param_3,param_1,&uStack_20);
          puVar4[1] = 0;
          puVar4[3] = 1;
          *puVar4 = uStack_20;
          puVar4[2] = uStack_1c;
          return 2;
        }
      }
      uVar1 = fn_823DC330(param_1,param_2,param_3,iVar3,param_5);
    }
  }
  return uVar1;
}

