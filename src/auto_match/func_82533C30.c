extern int *piRam8327f850;
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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82864898();
extern int fn_828648B8();
extern unsigned int lbl_821C3F6C;
extern unsigned int lbl_821C3FC4;


void fn_82533C30(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];

  *param_1 = &lbl_821C3FC4;
  uVar1 = (**(code **)(*(int *)param_1[2] + 0x44))(auStack_40);
  fn_828648B8(auStack_80,uVar1);
  fn_82240378(auStack_60,auStack_80);
  fn_82230300(auStack_80,1,0);
  fn_82864898(auStack_40);
  (**(code **)(*piRam8327f850 + 0x2c))(piRam8327f850,param_1 + 2);
  fn_82230300(auStack_60,1,0);
  *param_1 = &lbl_821C3F6C;
  return;
}
