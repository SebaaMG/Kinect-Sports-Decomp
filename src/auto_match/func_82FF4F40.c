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
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF5200();
extern unsigned int lbl_8208ED44;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82FF4F40(int param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  
  iVar3 = param_1 + 0x88;
  RtlEnterCriticalSection(iVar3);
  iVar2 = fn_82FF5200(param_1 + 4,param_2);
  pcVar1 = *(code **)(iVar2 + 0x20);
  if ((pcVar1 == (code *)0x0) || ((*(uint *)(iVar2 + 0x28) & param_3) == 0)) {
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    uStack_50 = *(undefined4 *)(iVar2 + 0x24);
    uStack_4c = *(undefined4 *)(iVar2 + 0xc);
    uStack_48 = (undefined4)param_2;
    uStack_44 = (undefined4)param_3;
    fStack_3c = (float)param_4[1] * lbl_8208ED44;
    fStack_40 = (float)*param_4 * lbl_8208ED44;
    fn_82A1E7D8(*(undefined4 *)(param_1 + 0xa4));
    RtlLeaveCriticalSection(iVar3);
    (*pcVar1)(param_3,&uStack_50);
    fn_82A1E810(*(undefined4 *)(param_1 + 0xa4));
  }
  return;
}

