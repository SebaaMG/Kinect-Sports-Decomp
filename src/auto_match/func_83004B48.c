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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_40;
extern unsigned int lbl_82005328;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBF0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_83004B48(undefined8 param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined4 uVar1;
  longlong lVar2;
  int aiStack_50 [2];
  float fStack_48;
  float fStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  if (param_2 != 0) {
    lVar2 = (longlong)(int)(*(byte *)(param_2 + 0x3c) - 0xff);
    fStack_48 = (float)lVar2 * lbl_8216CBF0 * lbl_82005328;
    fStack_44 = lbl_821AAD20;
    if (param_3 == '\0') {
      fStack_44 = lbl_8216C698;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      fn_82FF5400(lbl_832642F4,*(int *)(param_2 + 0x20),0x800000,lVar2,param_5,param_4,0);
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      iStack_40 = (int)param_5;
      aiStack_50[1] = 0x800000;
      if (iStack_40 == 0) {
        (*(code *)**(undefined4 **)(param_2 + 4))((double)fStack_44,param_2 + 4,0x800000);
      }
      else {
        uStack_3c = (undefined4)param_4;
        aiStack_50[0] = param_2 + 4;
        uStack_38 = 1;
        uVar1 = fn_82FF59A8(lbl_832642F4,aiStack_50,1,0);
        *(undefined4 *)(param_2 + 0x20) = uVar1;
      }
    }
  }
  return;
}

