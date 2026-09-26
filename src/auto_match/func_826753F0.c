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
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8260D428();
extern int fn_82674828();
extern int fn_826752B0();
extern unsigned int uStack_24;


int fn_826753F0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  iVar1 = fn_82674828();
  if (iVar1 != *(int *)(param_1 + 4)) {
    puVar4 = (undefined4 *)(iVar1 + 0xc);
    if (0xf < *(uint *)(iVar1 + 0x20)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar2 = fn_8260D428(param_2,0,*(undefined4 *)(param_2 + 0x10),puVar4,
                         *(undefined4 *)(iVar1 + 0x1c));
    if (-1 < iVar2) goto LAB_8267548c;
  }
  fn_8223B688(auStack_40,param_2);
  uStack_24 = 0;
  piVar3 = (int *)fn_826752B0(auStack_50,param_1,iVar1,auStack_40);
  iVar1 = *piVar3;
  fn_82230300(auStack_40,1,0);
LAB_8267548c:
  return iVar1 + 0x28;
}

