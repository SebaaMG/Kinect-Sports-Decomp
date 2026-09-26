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
extern int fn_82D2C3F8();
extern int fn_82D2C878();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uRam8323b6c8;
extern unsigned int uRam8323b6cc;
extern unsigned int uRam8323b6d0;


uint * fn_82D2CCA0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  fn_82D2C3F8(&iStack_48);
  fn_82D2C3F8(&iStack_38,param_2,param_5,param_6);
  uVar1 = uRam8323b6c8;
  if ((iStack_48 == 2) && (iStack_38 == 2)) {
    iStack_50 = iStack_44;
    iStack_4c = iStack_40;
    fn_82D2C878(param_1,param_2,&iStack_50,*(undefined4 *)((iStack_40 + 2) * 4 + iStack_44),
                  *(undefined4 *)((iStack_30 + 2) * 4 + iStack_34));
  }
  else {
    uVar2 = uRam8323b6d0 & 1;
    if ((uRam8323b6d0 & 1) == 0) {
      uRam8323b6d0 = uRam8323b6d0 | 1;
      uRam8323b6cc = 0;
      uRam8323b6c8 = uVar2;
      *param_1 = uVar2;
      param_1[1] = 0;
    }
    else {
      param_1[1] = uRam8323b6cc;
      *param_1 = uVar1;
    }
  }
  return param_1;
}

