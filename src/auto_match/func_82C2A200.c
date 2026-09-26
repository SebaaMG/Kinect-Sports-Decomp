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
extern int fn_82C10968();
extern int fn_82C10BA8();
extern int fn_82C28E48();
extern int fn_82C29878();
extern int fn_82C298F0();
extern int fn_82C29978();
extern int fn_82C29980();
extern int fn_82C29A30();
extern int fn_82C29B90();
extern int fn_82C29D30();
extern int fn_82C29F00();
extern int fn_82C29F08();
extern int fn_82C2A0A0();
extern unsigned int lbl_83175B68;
extern unsigned int lbl_83175B6C;


undefined8 fn_82C2A200(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int aiStack_40 [16];
  
  uVar1 = fn_82C10BA8(param_1,lbl_83175B68,aiStack_40);
  if (-1 < (int)uVar1) {
    if ((aiStack_40[0] == 0) ||
       (iVar2 = fn_82C10968(aiStack_40[0],lbl_83175B6C), iVar2 == 0)) {
      *param_4 = fn_82C28E48;
      param_4[1] = fn_82C29878;
      param_4[2] = fn_82C29978;
      uVar1 = 0;
      param_4[3] = fn_82C29F00;
      param_4[0xb] = 0;
      param_4[4] = fn_82C29F08;
      param_4[5] = fn_82C2A0A0;
      param_4[6] = fn_82C29980;
      param_4[7] = fn_82C29A30;
      param_4[8] = fn_82C29B90;
      param_4[9] = fn_82C29D30;
      param_4[10] = fn_82C298F0;
      if (*param_3 == 1) {
        uVar1 = 0x500000;
      }
    }
    else {
      uVar1 = 0xffffffff80500003;
    }
  }
  return uVar1;
}

