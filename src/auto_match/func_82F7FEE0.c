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
extern unsigned int *auStack_50;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7F510();
extern int fn_82F7FC58();
extern int fn_82F86648();
extern int fn_82F86888();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


undefined8
fn_82F7FEE0(undefined8 *param_1,undefined1 *param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iStack_60;
  uint uStack_5c;
  undefined1 auStack_50 [80];
  
  fn_82F86888(*param_1,&iStack_60,auStack_50,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    uVar2 = 0x16;
  }
  else {
    uVar5 = (ulonglong)uStack_5c;
    iVar4 = -1;
    if (param_3 != -1) {
      iVar4 = param_3 - (uint)(iStack_60 == 0x2d);
    }
    uVar2 = fn_82F86648(param_2 + (iStack_60 == 0x2d),iVar4,param_4,&iStack_60);
    if ((int)uVar2 == 0) {
      uVar6 = (ulonglong)uStack_5c - 1;
      if (((int)uVar6 < -4) || ((int)param_4 <= (int)uVar6)) {
        uVar2 = fn_82F7F510(param_2,param_3,param_4,param_5,&iStack_60,1);
      }
      else {
        pcVar1 = param_2 + (iStack_60 == 0x2d);
        if (((char)((~(uVar6 ^ uVar5 - 1) & 0xffffffff) >> 0x1f) + (uVar6 <= uVar5 - 1) & 1U) != 0)
        {
          do {
            pcVar7 = pcVar1;
            pcVar1 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          pcVar7[-1] = '\0';
        }
        uVar2 = fn_82F7FC58(param_2,param_3,param_4,&iStack_60,1);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  return uVar2;
}

