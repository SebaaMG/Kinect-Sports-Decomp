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
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_8269A1F0();
extern int fn_826A18A8();
extern int fn_826A1A28();
extern int fn_826C0330();


undefined8 fn_826A21E0(int *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  
  iVar2 = fn_826A1A28(param_3);
  if (iVar2 < 0) {
    cVar3 = fn_826A18A8((ulonglong)*param_2 + 0x250,param_3,-(6 < *(byte *)(param_2 + 1)) & 1);
    if ((cVar3 == '\0') ||
       ((param_1[10] == 0 &&
        (cVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_3,0), cVar3 != '\0')))) {
      uVar1 = fn_826C0330(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    fn_8269A1F0(param_4,param_1[10]);
  }
  else if ((iVar2 < param_1[10]) && (iVar2 = *(int *)(iVar2 * 4 + param_1[9]), iVar2 != 0)) {
    fn_82695FA0(param_4,iVar2);
  }
  else {
    fn_826959C8(param_4);
    *param_4 = 0;
  }
  return 1;
}

