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
extern int fn_8280AD30();
extern int fn_82810360();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285AAF0();
extern int fn_8285E178();
extern int fn_8285E398();
extern int fn_828602F8();
extern int fn_82860750();
extern unsigned int lbl_832115A4;
extern unsigned int lbl_832115A5;
extern unsigned int lbl_832115A6;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8285E4A8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  lbl_832115A5 = 0;
  lbl_832115A6 = 1;
  lbl_832115A4 = 0;
  cVar3 = '\0';
  uStack_70 = *param_8;
  uStack_6c = param_8[1];
  uStack_68 = param_8[2];
  puVar1 = (undefined4 *)fn_8285A830();
  iVar2 = fn_8285A808(param_3,param_4);
  if (puVar1[4] == 0) {
    fn_82810360(param_5,puVar1 + 5);
    fn_8285AAF0(param_3,param_4,param_5);
    cVar3 = fn_82860750(param_3,param_4,param_5);
    if (cVar3 != '\0') {
      puVar1[4] = 1;
    }
  }
  else if (puVar1[4] == 1) {
    puVar4 = puVar1 + 5;
    fn_82810360(puVar4,puVar1 + 8);
    fn_82810360(param_5,puVar4);
    fn_8285AAF0(param_3,param_4,param_5);
    cVar3 = '\x01';
    fn_828602F8(param_3,param_4,puVar1 + 8,puVar4);
    fn_8285AAF0(param_3,param_4,param_5);
  }
  if (cVar3 != '\0') {
    if (*(int *)(iVar2 + 0x94) != 0) {
      fn_8280AD30(iVar2 + 0x10,param_8,&uStack_70);
    }
    fn_8285E178(param_1,param_2,param_3,param_4,puVar1 + 1);
    fn_8285E398(param_3,param_4,*puVar1,0xffffffff83211340,0xffffffff83211380,0xffffffff832113c0,
                  0xffffffff83211534,0xffffffff832114b0);
  }
  return;
}

