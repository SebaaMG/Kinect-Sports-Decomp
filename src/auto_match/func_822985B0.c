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
extern unsigned int *auStack_120;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82299140();
extern int fn_8229DCA8();
extern int fn_8229E090();
extern int fn_8229E360();
extern int fn_82528EE0();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


void fn_822985B0(double param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iStack0000001c;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 auStack_120 [264];
  
  iStack0000001c = param_3;
  if ((param_3 != 0xb) || (param_1 <= (double)lbl_821CC160)) {
    puVar1 = (undefined4 *)fn_82299140(param_2 + 2,&stack0x0000001c);
    if (7 < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    fn_82528EE0(auStack_120,0x80,0xffffffff821a87fc,puVar1);
  }
  else {
    puVar1 = (undefined4 *)fn_82299140(param_2 + 2,&stack0x0000001c);
    if (7 < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    fn_82528EE0(auStack_120,0x80,0xffffffff821aaa1c,puVar1,
                      (double)(longlong)(param_1 + lbl_82195598));
  }
  if (param_2[0x17] == 0) {
    if (*param_2 != 0) {
      uStack_130 = 0;
      uStack_12c = 0;
      fn_82273CD8(&uStack_130,5);
      puStack_128 = auStack_120;
      fn_82672C20(*param_2,0xffffffff821aaa30,&uStack_130,1);
      fn_82273C88(&uStack_130);
    }
  }
  else if (param_3 == 0) {
    if (param_2[0x18] != 0) {
      fn_8229E090(param_2[0x18],0,1);
      param_2[0x18] = 0;
    }
  }
  else {
    if (param_2[0x18] == 0) {
      iVar2 = fn_8265C9E0(0x434);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        *(undefined ***)(iVar2 + 0x41c) = &lbl_821A8C90;
        fn_8229DCA8(iVar2,0xffffffff820e975c,0xffffffff820e975c,0xffffffff820e975c,
                          0xffffffff820e975c,0xffffffff82298fe8,param_2,1);
      }
      param_2[0x18] = iVar2;
    }
    piVar3 = param_2 + 0x19;
    if (7 < (uint)param_2[0x1e]) {
      piVar3 = (int *)*piVar3;
    }
    fn_8229E360(param_2[0x18],piVar3,auStack_120);
  }
  return;
}

