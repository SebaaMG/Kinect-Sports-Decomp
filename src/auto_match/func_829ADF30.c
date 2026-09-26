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
extern int fn_82F63F40();


void fn_829ADF30(int *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x14);
  if ((iVar3 < 1) || (*(int *)(iVar2 + 0x74) < iVar3)) {
    if ((*(int *)(iVar2 + 0x78) != 0) &&
       ((*(int *)(iVar2 + 0x7c) <= iVar3 && (iVar3 <= *(int *)(iVar2 + 0x80))))) {
      pcVar4 = *(char **)((iVar3 - *(int *)(iVar2 + 0x7c)) * 4 + *(int *)(iVar2 + 0x78));
      goto LAB_829adfa4;
    }
  }
  else {
    pcVar4 = *(char **)(*(int *)(iVar2 + 0x70) + iVar3 * 4);
LAB_829adfa4:
    if (pcVar4 != (char *)0x0) goto LAB_829adfb8;
  }
  *(int *)(iVar2 + 0x18) = iVar3;
  pcVar4 = (char *)**(undefined4 **)(iVar2 + 0x70);
LAB_829adfb8:
  cVar1 = *pcVar4;
  pcVar5 = pcVar4;
  do {
    if (cVar1 == '\0') {
LAB_829adfe8:
      fn_82F63F40(param_2,pcVar4,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
                        *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                        *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
      return;
    }
    pcVar5 = pcVar5 + 1;
    if (cVar1 == '%') {
      if (*pcVar5 == 's') {
        fn_82F63F40(param_2,pcVar4,iVar2 + 0x18);
        return;
      }
      goto LAB_829adfe8;
    }
    cVar1 = *pcVar5;
  } while( true );
}

