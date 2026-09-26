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
extern int fn_8267B890();
extern int fn_82695FA0();
extern int fn_826972E0();
extern int fn_826A18A8();
extern int fn_826A1A28();
extern int fn_826A2CB0();
extern int fn_826C1BA0();


undefined8
fn_826A3A28(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  char cVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  double dVar6;
  
  cVar5 = fn_826A18A8((ulonglong)*(uint *)(param_2 + 0x78) + 0x250,param_3,
                        -(6 < *(byte *)(param_2 + 0x7c)) & 1);
  if (cVar5 == '\0') {
    uVar3 = fn_826A1A28(param_3);
    if (-1 < (longlong)uVar3) {
      if (*(int *)(param_1 + 0x28) <= (int)uVar3) {
        fn_826A2CB0(param_1 + -0x10,uVar3 + 1);
      }
      iVar1 = (int)((uVar3 & 0x3fffffff) << 2);
      if (*(int *)(iVar1 + *(int *)(param_1 + 0x24)) == 0) {
        puVar4 = (undefined1 *)
                 fn_8267B890(*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x288),0x10,0);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined1 **)(iVar1 + *(int *)(param_1 + 0x24)) = puVar4;
      }
      fn_82695FA0(*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x24)),param_4);
      return 1;
    }
  }
  else {
    dVar6 = (double)fn_826972E0(param_4,0);
    fn_826A2CB0(param_1 + -0x10,0xffffffffU - ((int)dVar6 >> 0x1f) & (int)dVar6);
  }
  uVar2 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

