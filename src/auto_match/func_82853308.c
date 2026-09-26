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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8280AE70();
extern int fn_82810360();
extern int fn_82860C68();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_28;
extern unsigned int uStack_34;


void fn_82853308(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  if (*(int *)(param_3 + 0x3c) != 0) {
    iVar1 = *(int *)(param_2 + 4) * 0x14 + *(int *)(param_3 + 0x3c);
    fn_82860C68(iVar1);
    fn_82810360(param_2 + 8,auStack_40);
    uStack_34 = lbl_821AAD20;
    fn_8280AE70((ulonglong)*param_1 + 0x40,auStack_40,auStack_30);
    *(undefined4 *)(iVar1 + 0x10) = uStack_28;
  }
  return;
}

