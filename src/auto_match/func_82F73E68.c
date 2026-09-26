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
extern unsigned int *auStack_18;
extern int fn_82F72DD0();
extern int fn_82F72F40();
extern int fn_82F735D8();
extern int fn_82F739E8();
extern int fn_82F73D20();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_20;


ulonglong * fn_82F73E68(ulonglong *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong uStack_20;
  undefined1 auStack_18 [8];
  
  if (*lbl_832635C0 == '\0') {
    puVar3 = (ulonglong *)fn_82F72F40(auStack_18,0xffffffff82169e1c);
    uStack_20 = *puVar3;
    fn_82F72DD0(&uStack_20,1);
    *param_1 = uStack_20;
  }
  else {
    if (*lbl_832635C0 == 'Z') {
      lbl_832635C0 = lbl_832635C0 + 1;
      uStack_20 = uStack_20 & 0xffff;
      *param_1 = uStack_20;
      return param_1;
    }
    uVar1 = fn_82F73D20(&uStack_20);
    puVar2 = (undefined4 *)fn_82F739E8(auStack_18,0xffffffff82169e1c,uVar1);
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)((int)param_1 + 4) = puVar2[1];
  }
  fn_82F735D8(param_1,0x29);
  return param_1;
}

