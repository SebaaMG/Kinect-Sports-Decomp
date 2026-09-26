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
extern int fn_825BBD78();
extern int fn_825BBFA8();
extern int fn_825BC0E0();
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CC160;


ushort * fn_8255C730(int param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  double dVar6;
  double dVar7;
  float afStack_40 [16];
  
  puVar5 = *(ushort **)(param_1 + 4);
  puVar2 = *(ushort **)(param_1 + 8);
  puVar4 = (ushort *)0x0;
  dVar6 = (double)lbl_821CC160;
  dVar7 = (double)lbl_82195530;
  afStack_40[0] = lbl_821CC160;
  do {
    if (puVar2 <= puVar5) {
      return puVar4;
    }
    if ((param_3 == 0) || ((*(uint *)(puVar5 + 2) & param_3) != 0)) {
      uVar1 = *puVar5;
      if (uVar1 == 0) {
        iVar3 = fn_825BBFA8(puVar5,param_2,afStack_40);
LAB_8255c7d4:
        if (iVar3 != 0) {
          return puVar5;
        }
        dVar6 = (double)afStack_40[0];
      }
      else {
        if (uVar1 == 1) {
          iVar3 = fn_825BC0E0(puVar5,param_2,afStack_40);
          goto LAB_8255c7d4;
        }
        if (uVar1 < 3) {
          iVar3 = fn_825BBD78(puVar5,param_2,1);
          goto LAB_8255c7d4;
        }
      }
      if ((puVar4 == (ushort *)0x0) || (dVar6 < dVar7)) {
        dVar7 = dVar6;
        puVar4 = puVar5;
      }
    }
    puVar5 = puVar5 + 0x28;
  } while( true );
}

