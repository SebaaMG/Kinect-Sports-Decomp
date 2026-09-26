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
extern int fn_8268E408();
extern int fn_8268E490();
extern int fn_8268E5C8();
extern int fn_8268E620();
extern int fn_8268E938();
extern int fn_8268EAC0();


char fn_8268EC80(uint *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_6 < param_1[1]) {
    param_6 = param_1[1];
  }
  uVar6 = (param_4 + param_6) - 1 & ~(param_6 - 1);
  uVar7 = (param_5 + param_6) - 1 & ~(param_6 - 1);
  if (uVar7 == uVar6) {
LAB_8268ecd0:
    cVar3 = '\0';
  }
  else {
    if (uVar7 <= uVar6) {
      fn_8268EAC0(param_1,param_2,param_3 + uVar7,uVar6 - uVar7,param_6);
      return *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10) ==
             (*(int *)(param_3 + uVar7 + 0x24) << (*param_1 & 0x3f)) + param_3 + uVar7;
    }
    piVar5 = (int *)(param_3 + uVar6);
    piVar2 = (int *)fn_8268E620(param_1 + 4,piVar5);
    if (((piVar2 != (int *)0x0) && (piVar2[8] == param_2)) && (piVar2 == piVar5)) {
      uVar4 = (piVar2[9] << (*param_1 & 0x3f)) + (int)piVar2;
      if (param_3 + uVar7 <= uVar4) {
        param_1[5] = param_1[5] - piVar2[9];
        piVar5 = (int *)*piVar2;
        if (piVar5 == piVar2) {
          fn_8268E490(param_1 + 3,piVar2);
        }
        else {
          piVar1 = (int *)piVar2[1];
          *piVar1 = (int)piVar5;
          piVar5[1] = (int)piVar1;
          fn_8268E408(param_1 + 3,piVar2);
        }
        fn_8268E5C8(param_1 + 4,piVar2);
        fn_8268E938(param_1,piVar2,piVar2,uVar7 - uVar6);
        goto LAB_8268ecd0;
      }
      if (uVar4 == *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10)) {
        return 3;
      }
    }
    cVar3 = ((int *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10)) == piVar5) + '\x02';
  }
  return cVar3;
}

