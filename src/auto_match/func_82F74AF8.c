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
extern unsigned int *auStack_28;
extern int fn_82F72F40();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F74120();
extern int fn_82F78108();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_30;


undefined8 * fn_82F74AF8(undefined8 *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F73988(param_1,1,param_2);
    return param_1;
  }
  if ((param_3 != 0) && (cVar1 == 'X')) {
    lbl_832635C0 = lbl_832635C0 + 1;
    if (*param_2 == 0) {
      fn_82F72F40(param_1,0xffffffff8202f48c);
      return param_1;
    }
    fn_82F739E8(param_1,0xffffffff82169e5c,param_2);
    return param_1;
  }
  if (cVar1 == 'Y') {
    lbl_832635C0 = lbl_832635C0 + 1;
    fn_82F74120(param_1);
    return param_1;
  }
  fn_82F78108(&uStack_30,param_2);
  if ((param_2[1] & 0x20000U) == 0) {
    if ((param_2[1] & 0x40000U) == 0) goto LAB_82f74bd8;
    uVar3 = 0xffffffff82169e40;
  }
  else {
    uVar3 = 0xffffffff82169e50;
  }
  puVar2 = (undefined8 *)fn_82F739E8(auStack_28,uVar3,&uStack_30);
  uStack_30 = *puVar2;
LAB_82f74bd8:
  *param_1 = uStack_30;
  return param_1;
}

