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
extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern int fn_8226D318();
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern int fn_82F691F0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_825668D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int aiStack_30 [6];
  
  aiStack_30[0] = 0;
  aiStack_30[1] = 0;
  aiStack_30[2] = 0;
  aiStack_30[3] = 0;
  if (*(int *)(param_1 + 0x208) == 0) {
    uVar1 = fn_8263C910(0x140,0xb4,0x18280186,2,aiStack_30);
    *(undefined4 *)(param_1 + 0x208) = uVar1;
  }
  if (*(int *)(param_1 + 0x20c) == 0) {
    iVar2 = fn_8226D318(0x140,0xb4,0x18280186,2);
    aiStack_30[0] = iVar2 + aiStack_30[0];
    uVar1 = fn_8263C910(0x140,0xb4,0x1a220197,2,aiStack_30);
    *(undefined4 *)(param_1 + 0x20c) = uVar1;
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    uVar1 = fn_8263C7F0(0x140,0xb4,1,1,0,0x18280186,0,3);
    *(undefined4 *)(param_1 + 0x204) = uVar1;
    fn_8263BDD8(uVar1,0,0,0,&uStack_3c,&uStack_40,auStack_34,auStack_38);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uStack_3c,0,(ulonglong)uStack_40 * 0xb4);
  }
  return;
}

