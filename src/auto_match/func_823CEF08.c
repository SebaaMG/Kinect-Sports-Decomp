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
extern int fn_822315A0();
extern int fn_822EFBF0();
extern int fn_823F0828();
extern int fn_8288B760();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CC160;


void fn_823CEF08(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar4;
  undefined4 *puVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if ((iVar1 != 0) && (cVar4 = fn_8288B760(iVar1), cVar4 == '\0')) {
    puVar3 = (undefined4 *)fn_822EFBF0(auStack_40,iVar1);
    fn_823F0828((ulonglong)*(uint *)*puVar3 + 0x270,param_2);
    if (iStack_3c == 0) {
      return;
    }
    fn_822315A0();
    return;
  }
  *(int *)(param_1 + 0x1634) = (int)param_2;
  uVar2 = lbl_821CC160;
  *(undefined1 *)(param_1 + 0x1630) = 1;
  *(undefined4 *)(param_1 + 0x1670) = uVar2;
  puVar3 = (undefined4 *)(param_1 + 0x1640U & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  return;
}

