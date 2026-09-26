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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82935240();
extern int fn_829354C0();
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A860();
extern int fn_82A9BE60();


void fn_82A9C6B0(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b08);
  fn_82A9A860(param_2);
  uVar1 = fn_82935240(param_4);
  lVar2 = fn_8265C940((uVar1 & 0x3fffffff) << 2,0x24870000);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0x8007000e;
  }
  else {
    fn_829354C0(param_4,lVar2,uVar1,0);
    puVar4 = (uint *)*param_3;
    if (puVar4 < puVar4 + param_3[1] * 4) {
      do {
        if ((*puVar4 & 0x80000000) != 0) {
          fn_82A99BC8(param_2);
          fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff82006634);
          fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,
                        (int)((int)puVar4 - *param_3) >> 4);
          fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff8200ed6c,puVar4[2]);
          fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28ec,puVar4[3]);
          fn_82A9A860(param_2);
          lVar3 = -0x7de69a7e;
          if ((int)((ulonglong)*puVar4 & 0x7fffffff) != -1) {
            lVar3 = (ulonglong)*(uint *)(param_1 + 0x2c) + ((ulonglong)*puVar4 & 0x7fffffff);
          }
          fn_82A9BE60(param_1,param_2,lVar2 + 8,(ulonglong)puVar4[1] + lVar2 + 8,lVar3);
          fn_82A99C28(param_2,0xffffffff82006634);
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 < (uint *)(param_3[1] * 0x10 + *param_3));
    }
    fn_8265C990(lVar2,0x24870000);
  }
  fn_82A99C28(param_2,0xffffffff820d2b08);
  return;
}

