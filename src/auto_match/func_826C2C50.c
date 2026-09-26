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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_82695FA0();
extern int fn_826BF5B8();
extern int fn_826C2BA8();
extern int fn_826C3768();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8
fn_826C2C50(int param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined1 auStack_40 [64];
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  auStack_40[0] = 0;
  fn_826C3768(&uStack_50,param_4);
  fn_82695FA0(auStack_40,param_5);
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)fn_8267B890(*(undefined4 *)(*param_2 + 0x288),4,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar1;
  }
  fn_826C2BA8(*(undefined4 *)(param_1 + 0x18),param_3,&uStack_50,-(6 < *(byte *)(param_2 + 1)) & 1
               );
  fn_826BF5B8(&uStack_50);
  return 1;
}

