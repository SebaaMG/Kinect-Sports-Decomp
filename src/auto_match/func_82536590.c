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
extern unsigned int *auStack_80;
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int *lbl_8327F868;


bool fn_82536590(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  char cVar3;
  int *apiStack_90 [4];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  if (param_2 == 0) {
    fn_82864988(auStack_80,0xffffffff821c3abc);
  }
  else {
    fn_828647F0(auStack_50);
  }
  uVar1 = fn_828647D8();
  apiStack_90[0] = (int *)*param_1;
  piVar2 = (int *)fn_82535298(apiStack_90,uVar1,0xffffffff83296bc0,0xffffffff83296bd0);
  apiStack_90[0] = piVar2;
  if (param_2 == 0) {
    fn_82864898(auStack_80);
  }
  else {
    fn_82864898(auStack_50);
  }
  cVar3 = (**(code **)(*piVar2 + 8))(piVar2);
  if (cVar3 == '\0') {
    fn_82536288(apiStack_90);
  }
  else {
    fn_82536288(apiStack_90);
    (**(code **)(*lbl_8327F868 + 8))
              (lbl_8327F868,0xffffffff821c3f38,0xb60,0xffffffff821c3efc,*param_1);
  }
  return cVar3 == '\0';
}

