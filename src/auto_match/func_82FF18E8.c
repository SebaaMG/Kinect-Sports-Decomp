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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FF0250();
extern int fn_82FF2248();
extern int fn_82FF22B8();
extern int fn_82FF23B8();
extern int fn_82FF2510();
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82FF18E8(double param_1,int param_2,undefined8 param_3,undefined8 *param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int aiStack_50 [2];
  undefined4 uStack_48;
  uint uStack_44;
  
  if (param_5 != '\0') {
    uVar1 = *(uint *)((int)param_4 + 4);
    uStack_48 = *(undefined4 *)param_4;
    uStack_44 = ~uVar1 & 0x80000000 | uStack_44 & 0x3fffffff;
    uVar2 = CONCAT44(uStack_48,uStack_44);
    fn_82FF2248(aiStack_50,param_2 + 0x1c,uVar2);
    if ((-(uint)(*(int *)(param_2 + 0x20) != aiStack_50[0]) & aiStack_50[0] + 8U) != 0) {
      if ((uVar1 & 0x80000000) != 0) {
        return;
      }
      fn_82FF23B8(param_2 + 0x1c,uVar2);
    }
  }
  if ((param_1 == (double)lbl_82005CCC) &&
     ((param_5 == '\0' || ((*(uint *)((int)param_4 + 4) & 0x80000000) != 0)))) {
    fn_82FF2248(aiStack_50,param_2 + 0x1c,*param_4);
    if (aiStack_50[0] != *(int *)(param_2 + 0x20)) {
      fn_82FF22B8(&uStack_48,param_2 + 0x1c,aiStack_50);
      fn_82FF0250(param_2);
      return;
    }
  }
  else {
    fn_82FF2510(param_1,param_2 + 0x1c,*param_4);
  }
  fn_82FF0250(param_2);
  return;
}

