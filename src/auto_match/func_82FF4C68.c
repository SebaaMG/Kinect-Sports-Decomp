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
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF5200();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82FF4C68(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar4 = param_1 + 0x88;
  RtlEnterCriticalSection(iVar4);
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  iVar3 = fn_82FF5200(param_1 + 4,uVar1);
  if (((*(uint *)(iVar3 + 0x28) & 4) == 0) ||
     (pcVar2 = *(code **)(iVar3 + 0x20), pcVar2 == (code *)0x0)) {
    RtlLeaveCriticalSection(iVar4);
  }
  else {
    uStack_50 = *(undefined4 *)(iVar3 + 0x24);
    uStack_4c = *(undefined4 *)(iVar3 + 0xc);
    uStack_44 = *(undefined4 *)(iVar3 + 8);
    uStack_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_48 = uVar1;
    fn_82A1E7D8(*(undefined4 *)(param_1 + 0xa4));
    RtlLeaveCriticalSection(iVar4);
    (*pcVar2)(4,&uStack_50);
    fn_82A1E810(*(undefined4 *)(param_1 + 0xa4));
  }
  return;
}

