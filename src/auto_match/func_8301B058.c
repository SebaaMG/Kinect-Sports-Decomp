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
extern int fn_830198B8();
extern int fn_83019B78();


undefined4 * fn_8301B058(int param_1,int param_2)

{
  int iVar1;
  char cVar4;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 0xc);
  puVar2 = (undefined4 *)*puVar3;
  do {
    if (puVar2 == (undefined4 *)0x0) {
fn_83019B78:
      cVar4 = fn_830198B8();
      if (cVar4 == '\0') {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(param_1 + 0xc);
        }
        else {
          **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
        }
        puVar2 = *(undefined4 **)(param_1 + 0xc);
        *(undefined4 **)(param_1 + 8) = puVar2;
        *(undefined4 *)(param_1 + 0xc) = *puVar2;
        *puVar2 = 0;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
        *(int *)(*(int *)(param_1 + 8) + 4) = iVar1;
      }
      return puVar2;
    }
    if (puVar2[1] == iVar1) {
      if (puVar2 != (undefined4 *)0xfffffffc) {
        return puVar3;
      }
      goto fn_83019B78;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

