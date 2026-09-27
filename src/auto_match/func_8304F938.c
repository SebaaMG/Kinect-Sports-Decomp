extern int *piRam8326504c;
extern unsigned int *puRam83265050;
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
extern int fn_82FA5060();
extern int fn_8304FAF0();
extern int fn_83054FA0();
extern int fn_830532E0();
extern unsigned int lbl_831BC978;
extern unsigned int uRam83265054;


uint fn_8304F938(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar4;
  ulonglong uVar2;
  int *piVar3;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;

  uVar7 = 0;
  uVar1 = (int)puRam83265050 - (int)piRam8326504c >> 2;
  piVar3 = piRam8326504c;
  if (uVar1 != 0) {
    do {
      if (*piVar3 == 0) {
        if (uVar7 != 0xffffffff) goto LAB_8304fa04;
        break;
      }
      uVar7 = uVar7 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar7 < uVar1);
  }
  puVar5 = puRam83265050;
  if (((uVar1 < uRam83265054) ||
      ((cVar4 = fn_8304FAF0(0xffffffff8326504c,1), cVar4 != '\0' &&
       (puVar5 = puRam83265050, uVar1 < uRam83265054)))) &&
     (puRam83265050 = puVar5 + 1, puVar5 != (undefined4 *)0x0)) {
    *puVar5 = 0;
    iVar6 = (int)puRam83265050 - (int)piRam8326504c;
    puRam83265050[-1] = 0;
    uVar7 = (iVar6 >> 2) - 1;
LAB_8304fa04:
    if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
      if ((*(uint *)(param_2 + 0x14) & 2) == 0) {
        return 0xffffffff;
      }
      uVar2 = fn_82FA5060(lbl_831BC978,0xa8);
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff;
      }
      piVar3 = (int *)fn_83054FA0(uVar2,param_3);
    }
    else {
      uVar2 = fn_82FA5060(lbl_831BC978,0xa0);
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff;
      }
      piVar3 = (int *)fn_830532E0(uVar2,param_3);
    }
    if (piVar3 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2,uVar7);
      if (iVar6 == 1) {
        piRam8326504c[uVar7] = (int)piVar3;
        return uVar7;
      }
      (**(code **)(*piVar3 + 0x14))(piVar3);
    }
  }
  return 0xffffffff;
}
