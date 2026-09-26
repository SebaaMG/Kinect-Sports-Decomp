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
extern int fn_82AB15D0();
extern unsigned int lbl_820E836C;
extern unsigned int lbl_820E8370;
extern unsigned int lbl_820E8374;
extern unsigned int lbl_8316FF50;


void fn_82BD2B48(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (((uint)param_2[0x39] >> 1 & 1) == 0) {
    uVar2 = *(uint *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 3 & 1;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    puVar3 = &lbl_820E8374;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x34))(param_2);
    if (cVar1 != '\0') goto LAB_82bd2bf4;
    if ((*(uint *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 1 & 1) == 0) {
      puVar3 = &lbl_820E8370;
    }
    else {
      puVar3 = &lbl_820E836C;
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar3 + *(int *)(param_1 + 4) * 0x10);
LAB_82bd2bf4:
  if (*(int *)(param_1 + 4) == -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8498,0xffffffff820e84a8,0x50);
  }
  return;
}

