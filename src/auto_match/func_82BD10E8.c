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
extern int fn_82BC0088();
extern int fn_82BD0948();
extern int fn_82BD0A98();
extern int fn_82BD34A0();
extern unsigned int lbl_83223EC4;


undefined8 fn_82BD10E8(int param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar2;
  undefined4 *puVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = (int)param_3;
  iVar3 = (int)param_2;
  if (iVar3 != iVar4) {
    cVar2 = fn_82BD0948(param_1,param_3,param_2);
    if (cVar2 != '\0') {
      return 0;
    }
    uVar5 = param_3;
    if ((iVar3 <= iVar4) && (uVar5 = param_2, iVar3 < iVar4)) {
      param_2 = param_3;
    }
    fn_82BD34A0(uVar5,param_2,lbl_83223EC4);
    iVar3 = *(int *)(param_1 + 4);
    if ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 4)) {
      puVar1 = (undefined4 *)(*(int *)(iVar3 + 8) + (int)uVar5 * 4);
    }
    else {
      puVar1 = (undefined4 *)fn_82BC0088(iVar3,uVar5);
    }
    fn_82BD0A98(*puVar1,param_2,param_1);
  }
  return 1;
}

