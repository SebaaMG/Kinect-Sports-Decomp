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
extern int fn_82CFF8D0();
extern int fn_82CFF928();


void fn_82D71668(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if ((param_1[2] & 0x80000000U) == 0) {
    uVar4 = fn_82CFF8D0(*param_1,param_1[2] << 2);
    (**(code **)(*param_3 + 0x14))(param_3,3,0xffffffff82138a78,*param_1,param_1[1] << 2,uVar4);
  }
  iVar6 = 0;
  do {
    piVar3 = *(int **)(*param_1 + iVar6);
    piVar7 = piVar3 + 4;
    iVar1 = *piVar3;
    fn_82CFF928(param_3,0xffffffff82139c04,piVar3,iVar1 + 0x10,0x200);
    iVar6 = iVar6 + 4;
    do {
      iVar5 = 0x10;
      switch(*(undefined1 *)piVar7) {
      case 1:
        return;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        iVar5 = 0x20;
      case 2:
      case 3:
      case 6:
      case 10:
      case 0xb:
      case 0xe:
        pcVar2 = *(code **)((uint)*(byte *)((int)piVar7 + 1) * 0x50 + *param_2 + 0x16cc);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(piVar7,(undefined1 *)((int)piVar7 + iVar5),param_2,param_3);
        }
      case 0:
        piVar7 = (int *)((uint)(byte)*piVar7 + (int)piVar7);
      }
    } while (piVar7 < (int *)((int)piVar3 + iVar1 + 0x10));
  } while( true );
}

