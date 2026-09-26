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
extern int fn_8268E7C0();
extern int fn_8268F0E8();


int * fn_8268F148(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_1[2] < param_3) {
    puVar7 = param_1 + 3;
    piVar3 = (int *)fn_8268E7C0(puVar7);
    piVar2 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      uVar1 = *param_1;
      piVar4 = piVar3;
      do {
        uVar5 = (int)piVar3 + param_3 & ~param_3;
        for (uVar6 = uVar5 - (int)piVar3; (uVar6 != 0 && (uVar6 < 0x40));
            uVar6 = param_3 + 1 + uVar6) {
          uVar5 = param_3 + 1 + uVar5;
        }
        if (uVar5 + (param_2 << (uVar1 & 0x3f)) <=
            (uint)((piVar3[9] << (uVar1 & 0x3f)) + (int)piVar3)) {
          piVar2 = (int *)*piVar3;
          if (piVar2 == piVar3) {
            fn_8268E490(puVar7,piVar3);
          }
          else {
            piVar4 = (int *)piVar3[1];
            *piVar4 = (int)piVar2;
            piVar2[1] = (int)piVar4;
            fn_8268E408(puVar7,piVar3);
          }
          fn_8268E5C8(param_1 + 4,piVar3);
          param_1[5] = param_1[5] - piVar3[9];
          return piVar3;
        }
        piVar3 = (int *)piVar3[1];
      } while ((piVar3 != piVar4) ||
              (piVar3 = (int *)fn_8268E7C0(puVar7,(ulonglong)(uint)piVar3[9] + 1),
              piVar2 = (int *)0x0, piVar4 = piVar3, piVar3 != (int *)0x0));
    }
  }
  else {
    piVar2 = (int *)fn_8268F0E8();
  }
  return piVar2;
}

