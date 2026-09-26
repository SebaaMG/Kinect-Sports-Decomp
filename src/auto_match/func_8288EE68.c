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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82882F30();
extern int fn_82882FB8();
extern int fn_82886518();
extern int fn_8288D9D8();
extern int fn_82897BD0();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5738();
extern int fn_828BE158();
extern unsigned int uStack_40;


void fn_8288EE68(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar6;
  char cVar7;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  uStack_40 = fn_82897BD0(param_2);
  piStack_3c = (int *)0x0;
  fn_82882F30(&uStack_40);
  piVar2 = piStack_3c;
  do {
    piStack_3c = piVar2;
    if (piVar2 == (int *)0x0) {
LAB_8288ef44:
      uVar3 = fn_8265C9E0(0xa0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_823AA970(param_2);
        uVar4 = fn_8288D9D8(uVar3,param_1,uVar4,0);
      }
      fn_82886518(uVar4,1000,0xffffffffffffffff);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = fn_82897BD0(param_2);
      fn_828BE158(uVar1,uVar4,uVar5,0);
      return;
    }
    iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
    if ((iVar6 == 0xd) && (*(char *)((int)piVar2 + 0x9d) != '\0')) {
      fn_828B5580(auStack_30,param_1 + 0x14);
      fn_828B5580(auStack_38,piVar2 + 0x20);
      cVar7 = fn_828B5738(auStack_38,auStack_30);
      fn_828B55B0(auStack_38);
      fn_828B55B0(auStack_30);
      if (cVar7 != '\0') {
        (**(code **)*piVar2)(piVar2,1);
        goto LAB_8288ef44;
      }
    }
    fn_82882FB8(&uStack_40);
    piVar2 = piStack_3c;
  } while( true );
}

